

if __name__ == '__main__':
    a = 0x00359141
    b = 0x4a564504

    abin = bin(a)[2:]
    bbin = bin(b)[2:]

    print(abin[1:])
    print(bbin[8:29])