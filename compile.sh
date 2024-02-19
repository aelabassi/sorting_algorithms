#!/bin/bash
main1(){
gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
}
main2(){
    gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
}

if [ $1 -eq 1 ]
then 
    main1
elif [ $1 -eq 2 ]
then
    main2
else
    echo "invalid option"
fi

echo "Compiling $1"