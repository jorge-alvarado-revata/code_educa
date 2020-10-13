import time

#-----------------------------------------------------------------------

class Stopwatch:

    # Construct self and start it running.
    def __init__(self):
        self._creationTime = time.time()  # Creation time

    # Return the elapsed time since creation of self, in seconds.
    def elapsedTime(self):
        return time.time() - self._creationTime
#-----------------------------------------------------------------------

"""
Acepta un entero N
compara el rendimiento de calcular los cuadrados usanfo i**2 vs i*i
para la tarea de calcular la suma de los cuadrados de 1 a N
"""


def main():

    n = int(input())
    total1 = 0.0
    watch1 = Stopwatch()
    for i in range(1, n+1):
        total1 += i**2
    time1 = watch1.elapsedTime()

    total2 = 0.0
    watch2 = Stopwatch()
    for i in range(1, n+1):
        total2 += i*i
    time2 = watch2.elapsedTime()

    print('total1: {} '.format(total1))
    print('total2: {} '.format(total2))

    print('time1: {:.4f}'.format(time1))
    print('time2: {:.4f}'.format(time2))

    print(total1/float(total2))
    print(float(time1)/float(time2))

if __name__ == '__main__':
    main()
