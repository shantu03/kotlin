/*
class car(var name:String, var Type:Int, airbag:Boolean)  //here name and Type is properties and airbag is simple parameter
{
    var conditon =airbag  //--> we have to use variable to access airbag parameter
    fun show()
    {
        println("$name is $Type wheeler and airbag condition is $conditon")
    }

}
fun main()
{
    var k=car("mustang",4,true)
    k.show()
    var p=car("Honda", 2,false)
    p.show()

}*/

class car(var name:String,var type:Int,var maxsetting:Int,var engine:String)
{
    fun show()
    {
        println("Name = $name, Type = $type, Max= $maxsetting, Engine_type= $engine")
    }
    constructor(nameparam:String,engineparam:String) : this(nameparam,4,5,engineparam)
//we have to assign primary constructor to secondary constructor with colon and this() i.e. :this
}
fun main()
{
    var p1=car("Mustang",4,5,"Petrol"); p1.show()
    var p2=car("Wagnor","CNG"); p2.show()
//    in above both object same parameter is passed with help of secondary constructor
//    varach same default parameter sarkh kaam kel pn with new variable/parameter(i.e. nameparam,engineparam)
    var p3=car("Honda",2,4,"petrol");p3.show()
}
