import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Insets;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.CheckBox;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.scene.layout.HBox;
import javafx.stage.Stage;


public class Main extends Application implements EventHandler<ActionEvent>
{
    //Define the contentes of the window here for global use
    Button bttn = new Button();

    public static void main(String args[])
    {
        //Launch the main application 
        launch(args);        
    }

    //Set the stage of the window
    @Override 
        
        public void start(Stage mainwin) throws Exception
        {
            //Define the MainWindow title
            mainwin.setTitle("RB GUI Main");

            //Set the layout and scene of the MainWindow
            VBox layout = new VBox(10);
            layout.setPadding(new Insets(100, 100, 100, 100));
            Scene scene = new Scene(layout, 400, 400); //Sets the dimensions of the window, width & Length
            
            //Add in the contents
            
            CheckBox cb = new CheckBox("Check Me");
            //cb.setSelected(true);  //Remove this if you intend to use the code 
            
            Label username = new Label("UserName");
                       
            TextField nameInput = new TextField(); //Makes a text box where we can take input
            
            Label passwd = new Label("Password");
            
            TextField passwdInput = new TextField();
            
            bttn.setText("Pen-Test-App-Login");
            bttn.setOnAction( e ->
                {                    
                    if (cb.isSelected())
                    {
                    	System.out.println("Check Box Selected");
                    }
                    
                }

            );

            //Add the contents 
            layout.getChildren().addAll(cb, username, nameInput, passwd, passwdInput, bttn);

            //Show the window
            mainwin.setScene(scene);
            mainwin.show();

        }
    
}
