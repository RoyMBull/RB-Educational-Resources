import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

/**
    Stage: The entire window
    Scene: Where the contents of the window are placed
    primaryStage: Variable we use to set the title and scene of/as well show the window

    Layout Types:
        VBox: Creates a column in which objects are stored
        StackPane: Lays out the objects in back-to-front order

 */

public class Main extends Application implements EventHandler<ActionEvent>
{
    //Define the window variable, and all scenes to follow
    Stage window;
    Scene scene1, scene2;

    //Define any contents to add to the scenes
    Button bttn = new Button();
    Button bttn2 = new Button();
    
    public static void main(String args[])
    {
        //Launch the main application 
        launch(args);        
    }

    //Set the stage of the window
    @Override 
        
        public void start(Stage primaryStage) throws Exception
        {
            //Define our stage variable and set the window title
            window = primaryStage;
            window.setTitle("RB GUI");

            //Create our layouts
            VBox layout1 = new VBox(20);
            StackPane layout2 = new StackPane();

            //Define the scenes 
            scene1 = new Scene(layout1, 300, 500);
            scene2 = new Scene(layout2, 400, 600);

            //Add to our layouts
            //

            //VBox layout1 

            Label label = new Label("New Label");
            
            bttn.setText("ENTER NEXT SCENE");
            bttn.setOnAction(e -> window.setScene(scene2));
            
            layout1.getChildren().addAll(label, bttn);


            //StackPane layout2

            bttn2.setText("RETURN TO PREVIOUS SCENE");
            bttn2.setOnAction(e -> window.setScene(scene1));

            layout2.getChildren().add(bttn2);

            //Define and show the main scene
            window.setScene(scene1);
            window.show();

        }
   

}
