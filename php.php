
<?php
// PHP code to check for Palindrome string in PHP
// Using strrev()
function Palindrome($string){ 
    if (strrev($string) == $string){ 
        return 1; 
    }
    else{
        return 0;
    }
} 
 
// Driver Code
$original = "dod";
if(Palindrome($original)){ 
    echo $original + "Palindrome"; 
}
else { 
echo $original + "Not a Palindrome"; 
}
?> 