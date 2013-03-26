# python implementation of phonebook.cpp

phonebook = {}

while True:
    name = raw_input("\nName? ")
    if len(name) == 0:
        break

    if name not in phonebook:
        print("not found!")
        enter_number = "Enter a number for {name}: ".format(name=name)
        number = raw_input(enter_number)
        phonebook[name] = number

    else:
        entry = "{name}'s number is {number}".format(name=name,
                                                     number=phonebook[name])
        print(entry)
