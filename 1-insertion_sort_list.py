#!/usr/bin/python3
def Insertion_sort(list_=[], size=0):
    """Insertio sort"""
    for i in range(1, size):
        value = list_[i]
        hole = i
        while hole > 0 and list_[hole-1] > value:
            list_[hole] = list_[hole-1]
            hole -= 1
            print(list_)
        list_[hole] = value
        
arr = [4,6,2,6,7,9,3,45,67]
Insertion_sort(arr, len(arr))

