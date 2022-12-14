

if __name__ == '__main__':
    deci = [167, 62, 188]
    for a in deci:
        print('decimal : {}, binary : {}, hexadecimal : {}'.format(a, bin(a), hex(a)))

    binaries = [0b00110111, 0b10001000, 0b11110011]
    for a in binaries:
        print('decimal : {}, binary : {}, hexadecimal : {}'.format(a, bin(a), hex(a)))
    
    hexas = [0x52, 0xac, 0xe7]
    for a in hexas:
        print('decimal : {}, binary : {}, hexadecimal : {}'.format(a, bin(a), hex(a)))