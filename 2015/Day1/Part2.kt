fun main(args : Array<String>) {
    val s = readLine()
    var ctr = 0
    for (i in 0..s!!.length) {
        if (s[i] == '(')
            ctr++;
        else {
            ctr--;
            if (ctr < 0) {
                println(i + 1)
                return;
            }
        }
    }
}
