/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIGame.h
 *
 * This object represents a game. Use BotFather to create and edit games, their short names will act as unique identifiers.
 */

#ifndef OAIGame_H
#define OAIGame_H

#include <QJsonObject>

#include "OAIAnimation.h"
#include "OAIMessageEntity.h"
#include "OAIPhotoSize.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIPhotoSize;
class OAIMessageEntity;
class OAIAnimation;

class OAIGame : public OAIObject {
public:
    OAIGame();
    OAIGame(QString json);
    ~OAIGame() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getTitle() const;
    void setTitle(const QString &title);
    bool is_title_Set() const;
    bool is_title_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QList<OAIPhotoSize> getPhoto() const;
    void setPhoto(const QList<OAIPhotoSize> &photo);
    bool is_photo_Set() const;
    bool is_photo_Valid() const;

    QString getText() const;
    void setText(const QString &text);
    bool is_text_Set() const;
    bool is_text_Valid() const;

    QList<OAIMessageEntity> getTextEntities() const;
    void setTextEntities(const QList<OAIMessageEntity> &text_entities);
    bool is_text_entities_Set() const;
    bool is_text_entities_Valid() const;

    OAIAnimation getAnimation() const;
    void setAnimation(const OAIAnimation &animation);
    bool is_animation_Set() const;
    bool is_animation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_title;
    bool m_title_isSet;
    bool m_title_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QList<OAIPhotoSize> m_photo;
    bool m_photo_isSet;
    bool m_photo_isValid;

    QString m_text;
    bool m_text_isSet;
    bool m_text_isValid;

    QList<OAIMessageEntity> m_text_entities;
    bool m_text_entities_isSet;
    bool m_text_entities_isValid;

    OAIAnimation m_animation;
    bool m_animation_isSet;
    bool m_animation_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIGame)

#endif // OAIGame_H
