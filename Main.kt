fun main()
{
//primenumber()
//evenodd()

    
}

fun check1(num:Int):Boolean
{ var p=false
    if(num%2==0)
        p= true

    return p
}
fun evenodd()
{
    for(i in 1..100)
    {
        if(check1(i))
        {
            println("Even =" + i.toString() + " ")
        }
        else
        {
            print("Odd =" + i.toString() + " ")
        }
    }
}

fun primenumber()
{
    for(i in 1..100)
    {
        if(check(i))
        {
            print(i.toString() + " ")
        }

    }
}
fun check(num:Int):Boolean
{
    var count =true
    for(i in 2..num/2)
    {
        if(num%i==0)
        {
            count=false
            break
        }
    }
    return count
}