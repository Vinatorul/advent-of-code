fun main(args : Array<String>) {
    var sum = 0;
    while (true) {
        val s = readLine()
        if (s == null)
            break
        val dim = s.split('x').map{ it.toInt() }
        val distances = listOf(dim[0]+dim[1], dim[1]+dim[2], dim[2]+dim[0])
        sum += 2*distances.min()!! + dim[0]*dim[1]*dim[2];
    }
    println(sum)
}
