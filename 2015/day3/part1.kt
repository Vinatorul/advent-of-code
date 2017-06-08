fun main(args : Array<String>) {
    var x = 0;
    var y = 0;
    var st = mutableSetOf(Pair(0, 0))
    var s = readLine()
    while (s != null) {
        s.forEach {
            when(it) {
                '<' -> x++ 
                '>' -> x--
                '^' -> y++
                'v' -> y--
            }
            st.add(Pair(x, y))
        }
        s = readLine()
    }
    println(st.size)
}
