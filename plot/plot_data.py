#!usr/bin/pyhton3

import numpy as np
import matplotlib.pyplot as plt

def main():
    recorded_data = open("fpu_benchmark.txt", 'r')
    plt.style.use('seaborn')

    operation = []
    operand_a = []
    operand_b = []
    hw_result = []
    hw_time = []
    sw_result = []
    sw_time = []

    counter = 0
    for row in recorded_data:
        row = row.split(';')
        if counter > 0:
            operation.append(row[0])
            operand_a.append(float(row[1]))
            operand_b.append(float(row[2]))
            hw_result.append(float(row[3]))
            hw_time.append(float(row[4]))
            sw_result.append(float(row[5]))
            sw_time.append(float(row[6]))
        counter = counter + 1
    
    ADD_counter = 0
    ADD_TT_HW = 0
    ADD_TT_SW = 0
    ADD_MT_HW = 0
    ADD_MT_SW = 0
    time_per_cycle = 1.0/80000000 * (10**6) ## in mu s
    for i in range(len(operation)):
        if operation[i] == "ADD":
            ADD_counter = ADD_counter + 1
            ADD_TT_HW = ADD_TT_HW + hw_time[i] * time_per_cycle
            ADD_TT_SW = ADD_TT_SW + sw_time[i] * time_per_cycle
        else:
            # calc cycles to time
            ADD_MT_HW = ADD_TT_HW/ADD_counter
            ADD_MT_SW = ADD_TT_SW/ADD_counter
            break



    SUB_counter = 0
    SUB_TT_HW = 0
    SUB_TT_SW = 0
    SUB_MT_HW = 0
    SUB_MT_SW = 0
    for i in range(len(operation)):
        if operation[i] == "SUB":
            SUB_counter = SUB_counter + 1
            SUB_TT_HW = SUB_TT_HW + hw_time[i] * time_per_cycle
            SUB_TT_SW = SUB_TT_SW + sw_time[i] * time_per_cycle

    # calc cycles to time   
    SUB_MT_HW = SUB_TT_HW/SUB_counter
    SUB_MT_SW = SUB_TT_SW/SUB_counter



    MUL_counter = 0
    MUL_TT_HW = 0
    MUL_TT_SW = 0
    MUL_MT_HW = 0
    MUL_MT_SW = 0
    for i in range(len(operation)):
        if operation[i] == "MUL":
            MUL_counter = MUL_counter + 1
            MUL_TT_HW = MUL_TT_HW + hw_time[i] * time_per_cycle
            MUL_TT_SW = MUL_TT_SW + sw_time[i] * time_per_cycle

    # calc cycles to time   
    MUL_MT_HW = MUL_TT_HW/MUL_counter
    MUL_MT_SW = MUL_TT_SW/MUL_counter




    DIV_counter = 0
    DIV_TT_HW = 0
    DIV_TT_SW = 0
    DIV_MT_HW = 0
    DIV_MT_SW = 0
    for i in range(len(operation)):
        if operation[i] == "DIV":
            DIV_counter = DIV_counter + 1
            DIV_TT_HW = DIV_TT_HW + hw_time[i] * time_per_cycle
            DIV_TT_SW = DIV_TT_SW + sw_time[i] * time_per_cycle

    # calc cycles to time   
    DIV_MT_HW = DIV_TT_HW/DIV_counter
    DIV_MT_SW = DIV_TT_SW/DIV_counter

    # create plot
    plt.figure(figsize=(13,8))

    w = 0.4
    plt.bar("ADD HW", ADD_MT_HW, width=w, bottom=None, align='center', data=None, label="ADD HW")  
    plt.bar("ADD SW", ADD_MT_SW, width=w, bottom=None, align='center', data=None, label="ADD SW")  
    plt.bar("SUB HW", SUB_MT_HW, width=w, bottom=None, align='center', data=None, label="SUB HW")  
    plt.bar("SUB SW", SUB_MT_SW, width=w, bottom=None, align='center', data=None, label="SUB SW")
    plt.bar("MUL HW", MUL_MT_HW, width=w, bottom=None, align='center', data=None, label="MUL HW")  
    plt.bar("MUL SW", MUL_MT_SW, width=w, bottom=None, align='center', data=None, label="MUL SW")
    plt.bar("DIV HW", DIV_MT_HW, width=w, bottom=None, align='center', data=None, label="DIV HW")  
    plt.bar("DIV SW", DIV_MT_SW, width=w, bottom=None, align='center', data=None, label="DIV SW")
    
    mue='\xb5'
    plt.xlabel("Operation", fontsize=15)
    plt.ylabel("Time in " + mue, fontsize=15)
    plt.title("Time comparison of hardware and software implementation\n for 1000 computations per operation", fontsize=18)

    plt.legend(loc="upper left")
    plt.grid(True)

    plt.savefig("benchmark.png", dpi=100)
    plt.show()


if __name__ == "__main__":
    main()