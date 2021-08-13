import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

/**
    Stage: The entire window
    Scene: Where the contents of the window are placed
    primaryStage: Variable we use to set the title and scene of/as well show the window

 */

public class Main extends Application implements EventHandler<ActionEvent>
{
    Button bttn = new Button();

    public static void main(String args[])
    {
        //Launch the main application 
        launch(args);        
    }

    //Set the stage of the window
    @Override 
        
        public void start(Stage primaryStage) throws Exception
        {
            //Define the naem of the stage title 
            primaryStage.setTitle("RB GUI Main");

            //Create the scene and start placing in the contents of the stage
            StackPane layout = new StackPane();
            Scene scene = new Scene(layout, 300, 500); //Sets the dimensions of the window, width & Length
            primaryStage.setScene(scene);

            //Define the contents
            bttn.setText("Pen-Test-App");

            //Program any contents needed
            bttn.setOnAction(e ->
                {
                    System.out.println("DBFZ");
                    System.out.println("DBFZ");
                    System.out.println("DBFZ");
                }
            );

            //Add the contents 
            layout.getChildren().add(bttn);

            //Show the window
            primaryStage.show();

        }
   

}
