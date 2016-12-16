fun main(args : Array<String>) {
    var x = arrayOf(0, 0);
    var y = arrayOf(0, 0);
    var st = mutableSetOf(Pair(0, 0))
    var s = readLine()
    while (s != null) {
        for (i in 0 until s.length) {
            when(s[i]) {
                '<' -> x[i%2]++ 
                '>' -> x[i%2]--
                '^' -> y[i%2]++
                'v' -> y[i%2]--
            }
            st.add(Pair(x[i%2], y[i%2]))
        }
        s = readLine()
    }
    println(st.size)
}
