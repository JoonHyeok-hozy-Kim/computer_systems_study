
def hex_addition(a, b):
    print(hex(a+b))

def hex_deduction(a, b):
    print(hex(a-b))

if __name__ == '__main__':
    hex_addition(0x503c, 0x8)
    hex_deduction(0x503c,0x40)
    hex_addition(0x503c, 64)
    hex_deduction(0x50ea, 0x503c)


    print(2**32)
    print(2**31)