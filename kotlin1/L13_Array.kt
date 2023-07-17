fun main()
{
    val k = arrayOf("This ", "is ", "Amazing")
    for((w,i)in k.withIndex())
        println("$w - $i")
    println(k.get(2))    //--->k[2]
    k.set(0,"SHantu")       //--->k[0]="SHantu"

    println("size of array is ${k.size}")

    for((e,i) in k.withIndex())
        println("$e - $i")


    
}