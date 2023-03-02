import re 

for i in range(int(input())):
    input()
    print("YES" if re.search('^[mM]+[eE]+[oO]+[wW]+$', input()) else "NO")
    

