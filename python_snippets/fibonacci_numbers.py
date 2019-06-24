import sys
import argparse

# Generate list of fibonacci numbers
def generate_fibonacci_numbers(n):
    
    fib_list = []
    
    for x in range(n):
        if x <= 1:
            fib_list.append(x)
        else:
            fib_list.append(fib_list[x-2]+fib_list[x-1])
        
    return fib_list

# main
def main():
    
    # Argument Parser to accept an optional argument. 
    parser =  argparse.ArgumentParser(description="Generate fibonacci numbers")
    parser.add_argument("-n","--numbers",type=int,required=False,help="Generate n fibonacci numbers")
    
    args = parser.parse_args()
    
    # Generate 10 fibonacci numbers by default
    n = 10
    if args.numbers:
        n = args.numbers
    
    number_list = generate_fibonacci_numbers(n)
    
    # print the fibonacci numbers
    print (number_list)
    
if __name__ == "__main__":
    main()
    sys.exit(0)