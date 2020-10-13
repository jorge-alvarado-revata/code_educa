import time
import math
class Stopwatch:

    # Construct self and start it running.
    def __init__(self):
        self._creationTime = time.time()  # Creation time

    # Return the elapsed time since creation of self, in seconds.
    def elapsedTime(self):
        return time.time() - self._creationTime
"""
Compare la ejecución de los algoritmos de factorial recursivo e iterativo
"""

def main():

    n = int(input())
    total1 = 0.0
    watch1 = Stopwatch() # 2:47:35
    for i in range(1, n+1):
        total1 += i**3

    time1 = watch1.elapsedTime()  # 2:47:55

    total2 = 0.0
    watch2 = Stopwatch()
    for i in range(1, n+1):
        total2 += i*i*i#math.pow(i,3)
    time2 = watch2.elapsedTime()

    print('total1: {} '.format(total1))
    print('total2: {} '.format(total2))

    print('time1: {:.4f}'.format(time1))
    print('time2: {:.4f}'.format(time2))

    print(total1/float(total2))
    print(float(time1)/float(time2))

if __name__ == '__main__':
    main()