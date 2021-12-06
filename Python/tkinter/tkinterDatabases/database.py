from tkinter import *
import os
from os import path
import sqlite3

root = Tk()
root.title("Databases")
root.geometry("280x340")


def relativePathToFullPath(relativePath):
    return os.path.join(os.path.dirname(os.path.realpath(__file__)), relativePath)


def firstRun():
    # Create or Connect to database
    conn = sqlite3.connect(relativePathToFullPath('database/address_book.db'))

    # Create table
    conn.execute("""CREATE TABLE addresses (
		first_name text,
		last_name text,
		address text,
		city text,
		state text,
		zipcode integer
        )""")

    # Commit changes
    conn.commit()

    # Close connection
    conn.close()


def commit():
    # Create or Connect to database
    conn = sqlite3.connect(relativePathToFullPath('database/address_book.db'))

    # Create cursor
    cursor = conn.cursor()

    # Insert into table
    cursor.execute("INSERT INTO addresses VALUES (:first_name, :last_name, :address, :city, :state, :zipcode)",
                    {
                        'first_name': first_name.get(),
                        'last_name': last_name.get(),
                        'address': address.get(),
                        'city': city.get(),
                        'state': state.get(),
                        'zipcode': zipcode.get()
                    })

    # Commit changes
    conn.commit()

    # Close connection
    conn.close()

    # Clear textboxes
    first_name.delete(0, END)
    last_name.delete(0, END)
    address.delete(0, END)
    city.delete(0, END)
    state.delete(0, END)
    zipcode.delete(0, END)


def createQueryWindow(records):
    top = Toplevel()
    top.title("RECORDS")
    top.geometry("400x400")

    # Loop through results
    print_records = ""  # Without declaration nothing will show
    for record in records:
        # str() so that we convert possible ints (zipcode) into strings
        print_records += str(record[0]) + " " + \
            str(record[1]) + "\t" + str(record[6]) + "\n"

    # Pack label with records on screen
    Label(top, text=print_records).pack()


def query():
    # Create or Connect to database
    conn = sqlite3.connect(relativePathToFullPath('database/address_book.db'))

    # Create cursor
    cursor = conn.cursor()

    # Query the database
    cursor.execute("SELECT *, oid FROM addresses")
    records = cursor.fetchall()
    createQueryWindow(records)

    # Commit changes
    conn.commit()

    # Close connection
    conn.close()

# Create function to delete record by ID


def delete():

    # Create or Connect to database
    conn = sqlite3.connect(relativePathToFullPath('database/address_book.db'))

    # Create cursor
    cursor = conn.cursor()

    # Delete Record
    cursor.execute("DELETE FROM addresses WHERE oid=" + selectIDTextbox.get())
    selectIDTextbox.delete(0, END)

    # Commit changes
    conn.commit()

    # Close connection
    conn.close()

# Create function to update record by ID


def update():

    global updateWindow
    updateWindow = Toplevel()
    updateWindow.title("Update a record")
    updateWindow.geometry("300x220")

    # Create global variables so they're accessible inside the save() function
    global first_name_update
    global last_name_update
    global address_update
    global city_update
    global state_update
    global zipcode_update

    first_name_update = Entry(updateWindow, width=30)
    first_name_update.grid(row=0, column=1, padx=20, pady=(10, 0))
    label_first_name_update = Label(updateWindow, text="First Name: ",)
    label_first_name_update.grid(row=0, column=0, pady=(10, 0))

    last_name_update = Entry(updateWindow, width=30)
    last_name_update.grid(row=1, column=1, padx=20)
    label_last_name_update = Label(updateWindow, text="Last Name: ")
    label_last_name_update.grid(row=1, column=0)

    address_update = Entry(updateWindow, width=30)
    address_update.grid(row=2, column=1, padx=20)
    label_address_update = Label(updateWindow, text="Address: ")
    label_address_update.grid(row=2, column=0)

    city_update = Entry(updateWindow, width=30)
    city_update.grid(row=3, column=1, padx=20)
    label_city_update = Label(updateWindow, text="City: ")
    label_city_update.grid(row=3, column=0)

    state_update = Entry(updateWindow, width=30)
    state_update.grid(row=4, column=1, padx=20)
    label_state_update = Label(updateWindow, text="State: ")
    label_state_update.grid(row=4, column=0)

    zipcode_update = Entry(updateWindow, width=30)
    zipcode_update.grid(row=5, column=1, padx=20)
    label_zipcode_update = Label(updateWindow, text="Zipcode: ")
    label_zipcode_update.grid(row=5, column=0)

    saveButton = Button(updateWindow, text="Save Record", command=save)
    saveButton.grid(row=6, column=0, columnspan=2, pady=10, ipadx=94)

    # Create or Connect to database
    conn = sqlite3.connect(relativePathToFullPath('database/address_book.db'))

    # Create cursor
    cursor = conn.cursor()

    record_id = selectIDTextbox.get()
    # Query the database
    cursor.execute("SELECT * FROM addresses WHERE oid=" + record_id)
    records = cursor.fetchall()

    # Loop through results and propagate textboxes
    for record in records:
        first_name_update.insert(0, record[0])
        last_name_update.insert(0, record[1])
        address_update.insert(0, record[2])
        city_update.insert(0, record[3])
        state_update.insert(0, record[4])
        zipcode_update.insert(0, record[5])

    # Commit changes
    conn.commit()

    # Close connection
    conn.close()

# Create function to save updated records


def save():

    # Create or Connect to database
    conn = sqlite3.connect(relativePathToFullPath('database/address_book.db'))

    # Create cursor
    cursor = conn.cursor()

    record_id = selectIDTextbox.get()

    cursor.execute("""UPDATE addresses SET
            first_name = :first,
            last_name = :last,
            address = :address,
            city = :city,
            state = :state,
            zipcode = :zipcode

            WHERE oid = :oid""",
                   {
                       'first': first_name_update.get(),
                       'last': last_name_update.get(),
                       'address': address_update.get(),
                       'city': city_update.get(),
                       'state': state_update.get(),
                       'zipcode': zipcode_update.get(),

                       'oid': record_id
                   })

    # Commit changes
    conn.commit()

    # Close connection
    conn.close()

    updateWindow.destroy()

# GUI Widgets


first_name = Entry(root, width=30)
first_name.grid(row=0, column=1, padx=20, pady=(10, 0))
label_first_name = Label(root, text="First Name: ",)
label_first_name.grid(row=0, column=0, pady=(10, 0))

last_name = Entry(root, width=30)
last_name.grid(row=1, column=1, padx=20)
label_last_name = Label(root, text="Last Name: ")
label_last_name.grid(row=1, column=0)

address = Entry(root, width=30)
address.grid(row=2, column=1, padx=20)
label_address = Label(root, text="Address: ")
label_address.grid(row=2, column=0)

city = Entry(root, width=30)
city.grid(row=3, column=1, padx=20)
label_city = Label(root, text="City: ")
label_city.grid(row=3, column=0)

state = Entry(root, width=30)
state.grid(row=4, column=1, padx=20)
label_state = Label(root, text="State: ")
label_state.grid(row=4, column=0)

zipcode = Entry(root, width=30)
zipcode.grid(row=5, column=1, padx=20)
label_zipcode = Label(root, text="Zipcode: ")
label_zipcode.grid(row=5, column=0)

selectIDTextbox = Entry(root, width=30)
selectIDTextbox.grid(row=8, column=1)
selectIDTextboxLabel = Label(root, text="Select ID: ")
selectIDTextboxLabel.grid(row=8, column=0)

# Create a Submit button
submitButton = Button(root, text="Submit", command=commit)
submitButton.grid(row=6, column=0, columnspan=2, pady=10, padx=10, ipadx=100)

# Create a Query button
queryButton = Button(root, text="Show Records", command=query)
queryButton.grid(row=7, column=0, columnspan=2, pady=10, padx=10, ipadx=82)

# Create a Delete button
deleteButton = Button(root, text="Delete Record", command=delete)
deleteButton.grid(row=10, column=0, columnspan=2, pady=10, padx=10, ipadx=82)

# Create an Update button
updateButton = Button(root, text="Update Record", command=update)
updateButton.grid(row=11, column=0, columnspan=2, pady=10, padx=10, ipadx=82)

if path.exists(relativePathToFullPath('database/address_book.db')) == False:
    firstRun()

root.mainloop()
