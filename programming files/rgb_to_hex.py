#TV

#We should add hex_to_rgb

def rgb_to_hex(r, g, b):
    #Convert values piece-wise
    r = max(0, min(255, r))
    g = max(0, min(255, g))
    b = max(0, min(255, b))
    #Format them as hex
    return '{:02X}{:02X}{:02X}'.format(r, g, b)


# test with hex_color = rgb_to_hex(255, 127, 0) # returns "FF7F00"
