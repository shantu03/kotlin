fun main()
{

    var k:Int = Integer.valueOf(readLine())

    for(i in k downTo 1)
    {
        println(i)
    }
    println(showdata(k))
}
fun showdata(p:Int):Int
{
    println("Inside a function")
    return (p*p)
}