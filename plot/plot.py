#!usr/bin/pyhton3

import numpy as np
import matplotlib.pyplot as plt
from array import *
import glob
import os
import statistics


def main():

    plt.style.use('seaborn')
    #plt.style.use('ggplot')

    NXPS = ["1 x 32", "2 x 32", "4 x 32", "16 x 16", "8 x 32", "10 x 32"]
    PROCESSORS = [1 * 32, 2 * 32, 4 * 32, 16 * 16, 8 * 32, 10 * 32]
    ALGOS = [
        "scan mpi",
        "scan lin",
        "scan log",
        "exscan mpi",
        "exscan lin",
        "exscan log",
        ]

    data = {}

    for vector_len in [1, 1000, 1000000]:

        data[vector_len] = {}

        filenames = glob.glob(str(vector_len) + '/*.out')

        # LOAD DATA FROM ALL FILES
        for file in filenames:
            datafile = open(file, 'r')
            nodes = file.split('_')[1]
            processors = file.split('_')[2]
            a = int(file.split('_')[4].split('.')[0])

            nodeProcessors = nodes + " x " + processors

            repetitions = []
            for row in datafile:
                row = row.split(',')
                repetitions.append( float(row[3]) )
            
            if a not in data[vector_len].keys():
                data[vector_len][a] = {}
            if nodeProcessors not in data[vector_len][a].keys():
                data[vector_len][a][nodeProcessors] = {}

            repetitions.sort()
            data[vector_len][a][nodeProcessors] = {"median": statistics.median( repetitions ), "avg": sum(repetitions)/len(repetitions), "repetitions": repetitions}

    #print(data)
    print(data)

    for vector_len in [1, 1000, 1000000]:

        fig = plt.figure(0)
        x = np.arange(6)
        width = 0.2

        for a in [x for x in range(0, 3)]:
            data[vector_len][a]
            line_data = []
            for nXp in NXPS:
                line_data.append(data[vector_len][a][nXp]["median"]*1000)

            plt.plot(NXPS, line_data)

        plt.legend(ALGOS[0:3])
        print(line_data)
        plt.xlabel("Total number of processors", fontsize=10)
        plt.ylabel("Running time in milliseconds", fontsize=10 )
        plt.title("Data length = " + str(vector_len) + " (median)", fontsize=15)
        plt.savefig( "s_n_" + str(vector_len) + "_median.svg", format="svg", dpi=1200 )
        plt.show()


    for vector_len in [1, 1000, 1000000]:

        fig = plt.figure(0)
        x = np.arange(6)
        width = 0.2

        for a in [x for x in range(3, 6)]:
            data[vector_len][a]
            line_data = []
            for nXp in NXPS:
                line_data.append(data[vector_len][a][nXp]["median"]*1000)

            plt.plot(NXPS, line_data)

        plt.legend(ALGOS[3:6])
        print(line_data)
        plt.xlabel("Total number of processors", fontsize=10)
        plt.ylabel("Running time in milliseconds", fontsize=10 )
        plt.title("Data length = " + str(vector_len) + " (median)", fontsize=15)
        plt.savefig( "es_n_" + str(vector_len) + "_median.svg", format="svg", dpi=1200 )
        plt.show()

    



if __name__ == "__main__":
    main()
