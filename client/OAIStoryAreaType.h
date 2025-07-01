/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
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
 * OAIStoryAreaType.h
 *
 * Describes the type of a clickable area on a story. Currently, it can be one of  * [StoryAreaTypeLocation](https://core.telegram.org/bots/api/#storyareatypelocation) * [StoryAreaTypeSuggestedReaction](https://core.telegram.org/bots/api/#storyareatypesuggestedreaction) * [StoryAreaTypeLink](https://core.telegram.org/bots/api/#storyareatypelink) * [StoryAreaTypeWeather](https://core.telegram.org/bots/api/#storyareatypeweather) * [StoryAreaTypeUniqueGift](https://core.telegram.org/bots/api/#storyareatypeuniquegift)
 */

#ifndef OAIStoryAreaType_H
#define OAIStoryAreaType_H

#include <QJsonObject>

#include "OAILocationAddress.h"
#include "OAIReactionType.h"
#include "OAIStoryAreaTypeLink.h"
#include "OAIStoryAreaTypeLocation.h"
#include "OAIStoryAreaTypeSuggestedReaction.h"
#include "OAIStoryAreaTypeUniqueGift.h"
#include "OAIStoryAreaTypeWeather.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIReactionType;
class OAILocationAddress;

class OAIStoryAreaType : public OAIObject {
public:
    OAIStoryAreaType();
    OAIStoryAreaType(QString json);
    ~OAIStoryAreaType() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    double getLatitude() const;
    void setLatitude(const double &latitude);
    bool is_latitude_Set() const;
    bool is_latitude_Valid() const;

    double getLongitude() const;
    void setLongitude(const double &longitude);
    bool is_longitude_Set() const;
    bool is_longitude_Valid() const;

    OAIReactionType getReactionType() const;
    void setReactionType(const OAIReactionType &reaction_type);
    bool is_reaction_type_Set() const;
    bool is_reaction_type_Valid() const;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    double getTemperature() const;
    void setTemperature(const double &temperature);
    bool is_temperature_Set() const;
    bool is_temperature_Valid() const;

    QString getEmoji() const;
    void setEmoji(const QString &emoji);
    bool is_emoji_Set() const;
    bool is_emoji_Valid() const;

    qint32 getBackgroundColor() const;
    void setBackgroundColor(const qint32 &background_color);
    bool is_background_color_Set() const;
    bool is_background_color_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    OAILocationAddress getAddress() const;
    void setAddress(const OAILocationAddress &address);
    bool is_address_Set() const;
    bool is_address_Valid() const;

    bool isIsDark() const;
    void setIsDark(const bool &is_dark);
    bool is_is_dark_Set() const;
    bool is_is_dark_Valid() const;

    bool isIsFlipped() const;
    void setIsFlipped(const bool &is_flipped);
    bool is_is_flipped_Set() const;
    bool is_is_flipped_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    double m_latitude;
    bool m_latitude_isSet;
    bool m_latitude_isValid;

    double m_longitude;
    bool m_longitude_isSet;
    bool m_longitude_isValid;

    OAIReactionType m_reaction_type;
    bool m_reaction_type_isSet;
    bool m_reaction_type_isValid;

    QString m_url;
    bool m_url_isSet;
    bool m_url_isValid;

    double m_temperature;
    bool m_temperature_isSet;
    bool m_temperature_isValid;

    QString m_emoji;
    bool m_emoji_isSet;
    bool m_emoji_isValid;

    qint32 m_background_color;
    bool m_background_color_isSet;
    bool m_background_color_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    OAILocationAddress m_address;
    bool m_address_isSet;
    bool m_address_isValid;

    bool m_is_dark;
    bool m_is_dark_isSet;
    bool m_is_dark_isValid;

    bool m_is_flipped;
    bool m_is_flipped_isSet;
    bool m_is_flipped_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIStoryAreaType)

#endif // OAIStoryAreaType_H
