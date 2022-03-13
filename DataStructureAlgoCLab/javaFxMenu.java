package sample;

import com.sun.prism.paint.Color;
import com.sun.scenario.effect.impl.sw.java.JSWBlend_BLUEPeer;
import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Menu;
import javafx.scene.control.MenuBar;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;
import javafx.scene.layout.VBox;


import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.Group;
//import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.scene.text.Text;
import javafx.scene.text.Font;

public class Main extends Application {

    @Override
    public void start(Stage primaryStage) throws Exception{

        GridPane gridPane = new GridPane();

        MenuBar menuBar = new MenuBar();

        Menu menuFile = new Menu("File");
        Menu menuView = new Menu("View");
        Menu menuEdit = new Menu("Edit");

        menuFile.setOnAction(e-> System.out.println("Bangladesh"));




        menuBar.getMenus().addAll(menuFile,menuView,menuEdit);
        Scene scene = new Scene(new VBox(),500,500);

        ((VBox) scene.getRoot()).getChildren().addAll(menuBar);


        scene.setFill(javafx.scene.paint.Color.LIGHTBLUE);
        primaryStage.setScene(scene);
        primaryStage.show();
    }


    public static void main(String[] args) {
        launch(args);
    }
}