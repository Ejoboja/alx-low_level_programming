#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    """Prints x elements from a list.

    Args:
        my_list (list): The list containing elements to print.
        x (int): The number of elements from my_list to print.

    Returns:
        int: The number of elements actually printed.
    """
    ret = 0
    for i in range(x):
        try:
            print("{}".format(my_list[i]), end="")
            ret += 1
        except IndexError:
            break
    print("")
    return ret
