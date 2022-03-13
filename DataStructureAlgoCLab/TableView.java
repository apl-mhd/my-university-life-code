package sample;
import java.util.*;
import javafx.application.Application;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.cell.PropertyValueFactory;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

import javax.swing.text.TabableView;
import java.util.Observable;

public class Main extends Application {
    public static void main(String[] args) {
        launch(args);
    }

    Stage window;

    TableView<Products> table;


    @Override
    public void start(Stage primaryStage) throws Exception{

        window = primaryStage;

        window.setTitle("orko");

        //product name
        TableColumn<Products, String> namecolumn = new TableColumn<>("Name");
        namecolumn.setMinWidth(100);
        namecolumn.setCellValueFactory(new PropertyValueFactory<>("Name"));

        //product Price
        TableColumn<Products, String> priceColumn = new TableColumn<>("Price");
        priceColumn.setMinWidth(100);
        priceColumn.setCellValueFactory(new PropertyValueFactory<>("Price"));

//product Quantity
        TableColumn<Products, String> quantityColumn = new TableColumn<>("Quantity");
        quantityColumn.setMinWidth(100);
        quantityColumn.setCellValueFactory(new PropertyValueFactory<>("Quantity"));


        table = new TableView<>();
        table.setItems(getProduct());
        table.getColumns().addAll(namecolumn,priceColumn,quantityColumn);

        VBox layout = new VBox();
        layout.getChildren().addAll(table);
        Scene scene = new Scene(layout);

        primaryStage.setScene(scene);
       primaryStage.show();
    }


    public ObservableList<Products> getProduct(){

        ObservableList<Products> products = FXCollections.observableArrayList();

        products.add(new Products("Laptop",10.0,1));


        return  products;
    }



}









package sample;

public class Products {
    String name;
    double price;
    int quantity;

    public Products(){

        name = "";
        price=0;
        quantity=0;
    }

    public Products(String name, double price, int quantity) {
        this.name = name;
        this.price = price;
        this.quantity = quantity;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public int getQuantity() {
        return quantity;
    }

    public vaoid setQuantity(int quantity) {
        this.quantity = quantity;
    }
}