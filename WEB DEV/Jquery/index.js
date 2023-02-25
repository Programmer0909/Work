// $("button").html("<em>HUI HUI</em>")
// $("a").attr("href" , "https://www.bing.com/#")

// event listner

// $("h1").click(function () {
//     $("h1").css("color" , "red")
// })

// event listner on key press
// $(document).keypress(function(event){
//     // console.log(_event.key);
//     $("h1").text(event.key);
// })

// another way to add event listner

$("h1").on("mouseover",function(){
    $("h1").addClass("bg mar")
})

// to remove elements
// $("button").remove();

// animation
// $("h1").hide();
// $("h1").show();

// $("button").on("click",function(){
//     $("h1").toggle();
// })

// $("button").on("click",function(){
//     $("h1").fadeToggle();
//     // fadein and fadeout
// })

$("button").on("click",function(){
    $("h1").slideToggle();
    // slideup and slidedown
})


