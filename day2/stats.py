# python stdlib version of stats.cpp


def readData(f):
    """fill a list with values from file f"""
    data = [float(entry) for entry in f.read().splitlines()]
    return data


def mean(data):
    return sum(data) / len(data)


def median(data):
    N = len(data)
    sdata = sorted(data)
    if N % 2 == 0:
        med = (sdata[N / 2 - 1] + sdata[N / 2]) / 2
    elif N % 2 == 1:
        med = sdata[N / 2]
    else:
        print("Weird vector!")
        return 1
    return med


def std_dev(data):
    mu = mean(data)
    N = len(data)
    sigma = (sum([(x - mu) ** 2 for x in data]) / N) ** .5
    return sigma


def main():
    # read file object
    try:
        f = open("test.data")
    except IOError:
        exit('Cannot open data file')
    # populate list of values
    data = readData(f)
    f.close()

    print("Mean value = {val}".format(val=mean(data)))
    print("Median value = {val}".format(val=median(data)))
    print("Standard deviation = {val}".format(val=std_dev(data)))

    return 0


if __name__ == "__main__":
    main()
