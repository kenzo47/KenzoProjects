package com.adventofcode.day1;

import java.io.*;
import java.nio.file.FileSystems;
import java.nio.file.Path;
import java.util.ArrayList;

public class RocketEquationApp {
    public static void main(String[] args) throws FileNotFoundException, IOException {
        Path path = FileSystems.getDefault().getPath("mass.txt").toAbsolutePath();
        File file = new File(path.toString());

        BufferedReader bufferedReader = new BufferedReader(new FileReader(file));

        ArrayList<Integer> massValueList = new ArrayList<>();
        String line;
        long requiredFuel = 0;
        while ((line = bufferedReader.readLine()) != null) {
            int firstResult = 0;
            firstResult = Math.round(Integer.parseInt(line) / 3) - 2;
            System.out.println(firstResult);
            while (firstResult  > 0) {
                requiredFuel += firstResult;
                firstResult = Math.round(firstResult / 3) - 2;
                System.out.println(firstResult);
            }
        }
        System.out.println("Total required fuel: " + requiredFuel);
    }

}
