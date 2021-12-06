import re
# Outputfile
with open('resultItemsWithPrice.txt', 'w') as result:
    # File containing all the items that need to be matched
    with open('1.sqf', 'r') as items:
        matches = 0;
        # loop through each item in items
        for item in items:
            # Only items not commented out
            if not re.search('^\s*\/\/', item):
                # Remove whitespace in front
                trimmedItem = item.lstrip();
                # Remove ;\n
                trimmedItem = trimmedItem[:-2]
                # File containing various items with prices where items will be matched to
                with open('2.sqf','r') as itemsWithPrice:
                    # loop through each line in itemsWithPrice
                    for itemWithPrice in itemsWithPrice:
                        # check if we have a match
                        if re.search(trimmedItem + '.*$', itemWithPrice): # Get line to the end '.*$', So the price is included
                            matches += 1;
                            # if so, write the item with price to the output file
                            print('Match found: ' + trimmedItem)
                            result.write(itemWithPrice)
                            break # No need to continue the loop as we already found the price for a given item
        print('Found %d matches' % matches)