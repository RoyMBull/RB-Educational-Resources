
import javafx.application.Application;  
import javafx.scene.Scene;  
import javafx.scene.control.*;  
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.VBox;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
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
            VBox layout = new VBox(20);
            Scene scene = new Scene(layout, 400, 500);
            
            Button bttn = new Button("ClickMe");
            
            //Creating a theme for javafx applications
            
            //Sample 1: Default one's
            setUserAgentStylesheet(STYLESHEET_CASPIAN);
            
            //Sample 2: Implementing our CSS stylesheet
            scene.getStylesheets().add("somefile.css");
            
            //Sample 2: Setting the style of individual modules
            Label label = new Label("HI there");
            label.setStyle("-fx-text-fill: aliceblue");
            
            /** 
               .label
               {
               		//edits the elements of all labels in the app
               }
             */
            
            layout.getChildren().addAll(label, bttn);
            //Show the window
            mainwin.setScene(scene);
            mainwin.show();

        }
    
}
