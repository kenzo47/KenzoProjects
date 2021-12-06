import re
def arithmetic_arranger(problems, showResults=False):
    listSize = len(problems)
    if listSize > 5:
        return "Error: Too many problems."
    else:
        operatorPattern = re.compile("/|\-|\+|\*")
        firstOperandPattern = re.compile("^\d+")
        secondOperandPattern = re.compile("\\b[0-9]+$")
        firstOperands = []
        secondOperands = []
        allOperators = []
        index = -1
        for problem in problems:
            try:
                allOperators.append(re.search(operatorPattern, problem).group(0))
                firstOperands.append(re.search(firstOperandPattern, problem).group(0))
                secondOperands.append(re.search(secondOperandPattern, problem).group(0))
            except:
                return "Error: Numbers must only contain digits."
            index += 1
            # if firstOperands[index] == None or secondOperands[index] == None:
            #     return "Error: Numbers must only contain digits."
            if allOperators[index] != "+" and allOperators[index] != "-":
                return "Error: Operator must be '+' or '-'."
            elif len(firstOperands[index]) > 4 or len(secondOperands[index]) > 4:
                return "Error: Numbers cannot be more than four digits."
            else:
                continue
    return output_generator(firstOperands, allOperators, secondOperands, showResults)

def output_generator(firstOperands, operators, secondOperands, showResults):
    first, second, lines, sums, result = "", "", "", "", ""
    for i in range(len(firstOperands)):
        length = max(len(firstOperands[i]), len(secondOperands[i])) + 2
        if i > 0:
            first += "    " + firstOperands[i].rjust(length)
            second += "    " + operators[i] + secondOperands[i].rjust(length - 1)
            lines +=  "    " + "-" * (length)
            sums += "    " + str(eval(firstOperands[i] + operators[i] + secondOperands[i])).rjust(length)
        else:
            first += firstOperands[i].rjust(length)
            second += operators[i] + secondOperands[i].rjust(length - 1)
            lines += "-" * (length)
            sums += str(eval(firstOperands[i] + operators[i] + secondOperands[i])).rjust(length)
    if showResults:
        result += first + "\n" + second + "\n" + lines + "\n" + sums
    else:
        result += first + "\n" + second + "\n" + lines
    return result