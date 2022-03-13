package sample;

import javafx.application.Application;
import javafx.event.EventHandler;
import  javafx.event.Event;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;
import javafx.scene.control.Button;
import javafx.scene.control.Label;

//import java.awt.*;


//package sample;

import javafx.application.Application;
import javafx.event.Event;
import javafx.event.EventHandler;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

import java.awt.event.ActionEvent;






public class Main extends Application {

    Stage window;
    Scene scene1, scene2;



    @Override
    public void start(Stage primaryStage) throws Exception{

        window = primaryStage;

        Label label1 = new Label("welcome to first stage");
        Button button1 = new Button("got to scene two");

        button1.setOnAction(e->window.setScene(scene2));

        VBox layout1 = new VBox(20);

        layout1.getChildren().addAll(label1,button1);

        scene1 = new Scene(layout1,200,200);


        Button button2 = new Button("goto one");

        StackPane layout2 = new StackPane();

        button1.setOnAction(e->window.setScene(scene2));
        button2.setOnAction(e->window.setScene(scene1));

        layout2.getChildren().add(button2);
        scene2 = new Scene(layout2,600,300);

        window.setScene(scene1);
        window.setTitle("Sabi");
        window.show();






    }


    public static void main(String[] args) {
        launch(args);
    }
}