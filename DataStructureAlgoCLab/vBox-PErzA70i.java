package sample;

import com.sun.prism.paint.Color;
import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.geometry.Pos;
import javafx.scene.Group;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.PasswordField;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.control.TextField;
import java.awt.*;
import javafx.scene.control.Button;
import javafx.scene.control.Label;

import javax.management.NotificationEmitter;

public class Main extends Application {

    @Override
    public void start(Stage primaryStage) throws Exception{
        HBox hbox = new HBox(50);
        	        hbox.setAlignment(Pos.CENTER); // default TOP_LEFT

        	        VBox vbox1 = new VBox();
        	        vbox1.setAlignment(Pos.BOTTOM_CENTER);
        	        vbox1.setStyle("-fx-border-style: solid;"
                	                + "-fx-border-width: 1;"
                	                + "-fx-border-color: black");

        	        VBox vbox2 = new VBox(10);
        	        vbox2.setAlignment(Pos.CENTER);
        	        vbox2.setStyle("-fx-border-style: solid;"
                	                + "-fx-border-width: 1;"
                	                + "-fx-border-color: black");

        	        VBox vbox3 = new VBox(20);
        	        vbox3.setAlignment(Pos.TOP_CENTER);
        	        vbox3.setStyle("-fx-border-style: solid;"
                	                + "-fx-border-width: 1;"
                	                + "-fx-border-color: black");

        	        for (int i = 0; i < 5; i++)
            	        {
            	            Button bt = new Button("Button " + (i+1));
            	            Button bt2 = new Button("Button " + (i+1)); // unfortunately there´s no "clone" or "copy" method
            	            Button bt3 = new Button("Button " + (i+1));

            	            vbox1.getChildren().add(bt);
            	            vbox2.getChildren().add(bt2);
            	            vbox3.getChildren().add(bt3);
            	        }

        	        hbox.getChildren().addAll(vbox1, vbox2, vbox3);
        	        Scene scene = new Scene(hbox, 350, 250); // the hbox is the root node

                primaryStage.setTitle("HBox and VBox Example");
        	        primaryStage.setScene(scene);
        primaryStage.show();
        

    }


    public static void main(String[] args) {
        launch(args);
    }
}