function fizzbuzz(maxNum) {
        for (let i = 1; i <= maxNum; i++) {
                var result = "";
                if (i % 3 === 0 && i % 5 === 0) result += "fizzbuzz";
                else if (i % 3 === 0) result += "fizz";
                else if (i % 5 === 0) result += "buzz";
                if (result == "") {
                        console.log(i);
                } else {
                        console.log(result);
                }
        }
}

fizzbuzz(30);
