fun main(args : Array<String>) {
    var s = readLine()
    var x: Int
    var y: Int
    val keypad = arrayOf(
        charArrayOf('0', '0', '1', '0', '0'),
        charArrayOf('0', '2', '3', '4', '0'),
        charArrayOf('5', '6', '7', '8', '9'),
        charArrayOf('0', 'A', 'B', 'C', '0'),
        charArrayOf('0', '0', 'D', '0', '0')
    )
    while (s != null) {
        x = 1
        y = 1
        s.forEach {
            when (it) {
                'U' -> if (y > 0 && keypad[y-1][x] > '0') y--
                'R' -> if (x < 4 && keypad[y][x+1] > '0') x++
                'D' -> if (y < 4 && keypad[y+1][x] > '0') y++
                'L' -> if (x > 0 && keypad[y][x-1] > '0') x--
            }
        }
        print(keypad[y][x])
        s = readLine()
    }
}
