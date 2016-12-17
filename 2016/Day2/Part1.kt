fun main(args : Array<String>) {
    var s = readLine()
    var x: Int
    var y: Int
    while (s != null) {
        x = 1
        y = 1
        s.forEach {
            when (it) {
                'U' -> if (y > 0) y--
                'R' -> if (x < 2) x++
                'D' -> if (y < 2) y++
                'L' -> if (x > 0) x--
            }
        }
        print(y*3 + x + 1)
        s = readLine()
    }
}
