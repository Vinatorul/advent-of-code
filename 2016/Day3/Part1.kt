fun check_tria(a: Int, b: Int, c: Int) : Int {
    if (a + b <= c)
        return 0;
    if (a + c <= b)
        return 0;
    if (b + c <= a)
        return 0;
    return 1;
}

fun main(args : Array<String>) {
    var ctr = 0
    while (true) {
        val s = readLine()
        if (s == null)
            break
        ctr += s.split(' ').filter{ it.length > 0 }.map{ it.toInt() }.run { check_tria(this[0], this[1], this[2]) }
    }
    println(ctr)
}
