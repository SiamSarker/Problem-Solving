let a = [1,2,3];
let sum1 = 0;
let sum2 = 0;
var i = 0;

function checkSum(a){
    for (i = 0; i < a.length; i++){

        if ( i == 0 ) {
            for (var k = i+1; k < a.length; k++)
            {
                sum2 = sum2 + a[k];
            }
            if (sum1 === sum2) return i;
            else continue;
        }
    
        if ( i == a.length  -1 ) {
            for (var j = i-1; j >= 0; j--)
            {
                sum1 = sum1 + a[j];
            }
            if (sum1 === sum2) return i;
            else continue;
        }
        
        for (var j = i-1; j >= 0; j--)
        {
            sum1 = sum1 + a[j];
        }
    
        for (var k = i+1; k < a.length; k++)
        {
            sum2 = sum2 + a[k];
        }
    
        if (sum1 === sum2) return i;
    
        sum1 = 0;
        sum2 = 0;
    }
    
    return -1;
}

console.log(checkSum(a));