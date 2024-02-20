#!/bin/bash
main1(){
gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
}
main2(){
    gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
}
main3(){
    gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 2-main.c 2-selection_sort.c print_array.c -o select
}
main4(){
    gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick
}

if [ $1 -eq 1 ]
then 
    main1
elif [ $1 -eq 2 ]
then
    main2
elif [ $1 -eq 3 ]
then
    main3
elif [ $1 -eq 4 ]
then
    main4
else
    echo "invalid option"
fi

echo "Compiling $1"