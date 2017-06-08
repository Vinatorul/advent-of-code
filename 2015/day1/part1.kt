fun main(args : Array<String>) {
    val s = readLine()
    val i = s!!.count { c -> c == '(' }
    println(2*i - s.length)
}
