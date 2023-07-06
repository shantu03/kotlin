

//default parameterized sarkh ahe he
class student(var mark:Int=0,var name:String="NA",var default:Boolean=false)
{
    fun show()
    {
        println("Name= $name  Mark=$mark   Active Status : $default")
    }
}
fun main()
{
    var p= student(55,"Shantanu",true)
    p.show()
    var z=student()
    z.name="Aditya"
    z.show()

}


