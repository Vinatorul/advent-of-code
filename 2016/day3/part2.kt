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
        val a = s.split(' ').filter{ it.length > 0 }.map{ it.toInt() }
        val b = readLine()!!.split(' ').filter{ it.length > 0 }.map{ it.toInt() }
        val c = readLine()!!.split(' ').filter{ it.length > 0 }.map{ it.toInt() }
        for (it in 0..2)
            ctr += check_tria(a[it], b[it], c[it])
    }
    println(ctr)
}
