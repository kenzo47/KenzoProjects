def add_time(start, duration, **startingDayOfWeek):
    
    daysOfTheWeek = {"Monday":0, "Tuesday":1, "Wednesday":2, "Thursday":3, "Friday":4, "Saturday":5, "Sunday":6}
    
    startTimes = start.partition(":")
    startMinutesAndPeriod = startTimes[2].partition(" ")
    startHour = int(startTimes[0])
    startMinutes = int(startMinutesAndPeriod[0])
    periodAmPm = startMinutesAndPeriod[2]
    
    durationTimes = duration.partition(":")
    durationHours = int(durationTimes[0])
    durationMinutes = int(durationTimes[2])
    
    endMinutes = startMinutes + durationMinutes
    if endMinutes > 60:
        durationHours += 1
        endMinutes %= 60
    periods = (startHour + durationHours) // 12
    endHours = (startHour + durationHours) % 12
    
    if endMinutes <= 9:
        endMinutes = "0" + str(endMinutes)
    
    if endHours == 0:
        endHours = 12
    
    endPeriod = {"AM": "PM", "PM": "AM"}
        
    endTime = str(endHours) + ":" + str(endMinutes) + " " + endPeriod[periodAmPm]
    
    return endTime
