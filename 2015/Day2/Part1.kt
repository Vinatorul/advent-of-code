fun main(args : Array<String>) {
    var sum = 0;
    while (true) {
        val s = readLine()
        if (s == null)
            break
        val areas = s.split('x').map{ it.toInt() }.run {
            listOf(this[0]*this[1], this[1]*this[2], this[2]*this[0])
        }
        sum += areas.min()!! + 2*areas[0] + 2*areas[1] + 2*areas[2];
    }
    println(sum)
}
