#!usr/bin/pyhton3

import numpy as np
import matplotlib.pyplot as plt
from array import *
import glob
import os
import statistics


def main():
    # algoid, n, # repetition, running time
    # define specific path to 1, 1000 and 1000000 number
    numb_elements = [1 , 1000, 1000000]
    for numbs in numb_elements:
        path = './' + str(numbs) + '/'
        # Get list of all files in a given directory sorted by name
        filenames = sorted( filter( os.path.isfile, glob.glob(path + '*') ) )
        #print(filenames)
        # 0 - 5 algos
        algoid = [[],[],[],[],[],[]]
        n = [[],[],[],[],[],[]]
        numb_repetitions = [[],[],[],[],[],[]]
        numb_p = [[],[],[],[],[],[]]
        running_time = [[],[],[],[],[],[]]


        # LOAD DATA FROM ALL FILES
        for file in filenames:
            recorded_data = open(file, 'r')
            tasks_N = file.split('_')
            algoid_split = tasks_N[4].split('.');
            
            numb_p[int(algoid_split[0])].append( tasks_N[1] + " x " + tasks_N[2] )
            n[int(algoid_split[0])].append( float(tasks_N[3]) )
            
            median_time = []
            repetitions = []
            for row in recorded_data:
                row = row.split(',')
                median_time.append( float(row[3]) *1000 ) #to millis
                repetitions.append( float(row[2]) )
            
            done_repetitions = repetitions[len(repetitions)-1] + 1

            #get median values from the running times
            median_time.sort()
            running_time[int(algoid_split[0])].append( statistics.median( median_time ) )
            numb_repetitions[int(algoid_split[0])].append( done_repetitions )           

        print("SCAN for " + str(numbs) + " elements:")
        for p in range(len(numb_p[0])):
            print(str(numb_p[0][p]) + " & " + str(numb_p[0][p]) + " & 1 & " + str(running_time[0][p]) + " & " + str(running_time[1][p]) + " & " + str(running_time[2][p]) +  '\\')       
        
        print("EXSCAN for " + str(numbs) + " elements:")
        for p in range(len(numb_p[0])):
            print(str(numb_p[0][p]) + " & " + str(numb_p[0][p]) + " & 1 & " + str(running_time[3][p]) + " & " + str(running_time[4][p]) + " & " + str(running_time[5][p]) +  '\\')       
        
    


if __name__ == "__main__":
    main()