# Design Pattern : Strategy

Le design pattern Strategy permet de définir une famille d'algorithmes, d'encapsuler chacun d'eux et de les rendre interchangeables. La stratégie permet à l'algorithme de varier indépendamment des clients qui l'utilisent.

---

<div style="display: flex; flex-wrap: wrap; gap: 20px;">
  <div style="flex: 1; min-width: 300px; background-color: #f6f8fa; padding: 15px; border-radius: 5px; overflow-x: auto;">
    ## Code C++ (Exemple Simple)

    ```cpp
    // 1. Interface de la Stratégie
    class Strategy {
    public:
        virtual void execute() const = 0;
        virtual ~Strategy() = default;
    };

    // 2. Stratégie Concrète A
    class ConcreteStrategyA : public Strategy {
    public:
        void execute() const override {
            std::cout << "Exécution de la Stratégie A." << std::endl;
        }
    };

    // 3. Stratégie Concrète B
    class ConcreteStrategyB : public Strategy {
    public:
        void execute() const override {
            std::cout << "Exécution de la Stratégie B." << std::endl;
        }
    };

    // 4. Contexte
    class Context {
    private:
        Strategy* strategy_; // Pointeur vers l'objet Stratégie

    public:
        Context(Strategy* strategy) : strategy_(strategy) {}

        
        ~Context() {
            delete strategy_; // N'oubliez pas de libérer la mémoire
        }

        void setStrategy(Strategy* strategy) {
            delete strategy_; // Libérer l'ancienne stratégie si elle existe
            strategy_ = strategy;
        }

        void performAction() const {
            strategy_->execute(); // Déléguer l'exécution à la stratégie
        }
    };

    // Utilisation
    int main() {
        Context* context = new Context(new ConcreteStrategyA());
        context->performAction(); // Exécute la Stratégie A

        context->setStrategy(new ConcreteStrategyB());
        context->performAction(); // Exécute la Stratégie B

        delete context; // Libérer la mémoire du contexte
        return 0;
    }
    ```
  </div>

  <div style="flex: 1; min-width: 300px; padding: 15px;">
    ## Informations Complémentaires

    Ce code illustre le pattern Strategy :

    * **`Strategy` (Interface) :** Définit l'interface commune pour tous les algorithmes supportés. C'est une classe abstraite avec une méthode `execute()` purement virtuelle.
    * **`ConcreteStrategyA`, `ConcreteStrategyB` (Stratégies Concrètes) :** Implémentent l'interface `Strategy`. Chaque classe représente une implémentation spécifique d'un algorithme. Ici, elles affichent simplement un message différent.
    * **`Context` (Contexte) :** Maintient une référence à un objet `Strategy`. Le `Context` peut être configuré avec un objet `Strategy` concret au moment de l'exécution. Il délègue l'exécution de l'algorithme à l'objet `Strategy` référencé.

    **Avantages :**
    * **Flexibilité :** Permet de changer l'algorithme au runtime.
    * **Séparation des préoccupations :** Le `Context` n'a pas besoin de connaître les détails d'implémentation des stratégies.
    * **Extensibilité :** Facile d'ajouter de nouvelles stratégies sans modifier le `Context`.

    **Quand l'utiliser :**
    * Quand une classe définit de nombreux comportements et que ces comportements apparaissent sous forme de multiples instructions conditionnelles.
    * Quand plusieurs classes sont liées par des comportements similaires.
    * Quand un algorithme utilise des données que les clients ne devraient pas connaître.
  </div>
</div>