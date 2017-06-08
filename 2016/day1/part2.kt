fun main(args : Array<String>) {
    val instructions = readLine()!!.split(", ").map { Pair(it[0], it.substring(1).toInt()) }
    var x = 0;
    var y = 0;
    var dx = 1;
    var dy = 0;
    var st = mutableSetOf(Pair(0, 0))
    for (pair in instructions) {
        when (pair.first) {
            'R' -> {
                val t = dx; dx = dy; dy = t
                if (dy != 0)
                    dy = -dy
            }
            'L' -> {
                val t = dx; dx = dy; dy = t
                if (dx != 0)
                    dx = -dx
            }
        }
        val dest_x = x + dx*pair.second
        val dest_y = y + dy*pair.second
        do {
            x += dx
            y += dy
            val p = Pair(x, y)
            if (st.contains(p)) {
                println(Math.abs(x) + Math.abs(y))
                return
            }
            st.add(p)
        } while (x != dest_x || y != dest_y)
    }
}
