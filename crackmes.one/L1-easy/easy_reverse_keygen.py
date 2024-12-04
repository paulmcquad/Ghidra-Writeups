import string
import random

def credit():
    print()
    print("\tScript made by:\n")
    print("\t          __ ____                ____                         ")
    print("\t   ___   / // __ \ _____ ____   / __/___   _____ ____   _____ ")
    print("\t  / _ \ / // /_/ // ___// __ \ / /_ / _ \ / ___// __ \ / ___/ ")
    print("\t /  __// // ____// /   / /_/ // __//  __/(__  )/ /_/ // /     ")
    print("\t \___//_//_/    /_/    \____//_/   \___//____/ \____//_/      ")
    print()

def generateKey():
    key_length = 10
    special_char = "@"

    letters = string.ascii_letters
    digits = string.digits
    dictionary = letters + digits

    index = 0
    generated_key = ""
    while index < 9:
        if index == 4:
            generated_key += special_char
        generated_key += random.choice(dictionary)
        index += 1
    return generated_key

if __name__ == '__main__':
    for index in range(10):
        print("{}. Key: {}".format(index + 1,generateKey()))

