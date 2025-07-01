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
 * OAIInputStoryContent.h
 *
 * This object describes the content of a story to post. Currently, it can be one of  * [InputStoryContentPhoto](https://core.telegram.org/bots/api/#inputstorycontentphoto) * [InputStoryContentVideo](https://core.telegram.org/bots/api/#inputstorycontentvideo)
 */

#ifndef OAIInputStoryContent_H
#define OAIInputStoryContent_H

#include <QJsonObject>

#include "OAIInputStoryContentPhoto.h"
#include "OAIInputStoryContentVideo.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIInputStoryContent : public OAIObject {
public:
    OAIInputStoryContent();
    OAIInputStoryContent(QString json);
    ~OAIInputStoryContent() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getPhoto() const;
    void setPhoto(const QString &photo);
    bool is_photo_Set() const;
    bool is_photo_Valid() const;

    QString getVideo() const;
    void setVideo(const QString &video);
    bool is_video_Set() const;
    bool is_video_Valid() const;

    double getDuration() const;
    void setDuration(const double &duration);
    bool is_duration_Set() const;
    bool is_duration_Valid() const;

    double getCoverFrameTimestamp() const;
    void setCoverFrameTimestamp(const double &cover_frame_timestamp);
    bool is_cover_frame_timestamp_Set() const;
    bool is_cover_frame_timestamp_Valid() const;

    bool isIsAnimation() const;
    void setIsAnimation(const bool &is_animation);
    bool is_is_animation_Set() const;
    bool is_is_animation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_photo;
    bool m_photo_isSet;
    bool m_photo_isValid;

    QString m_video;
    bool m_video_isSet;
    bool m_video_isValid;

    double m_duration;
    bool m_duration_isSet;
    bool m_duration_isValid;

    double m_cover_frame_timestamp;
    bool m_cover_frame_timestamp_isSet;
    bool m_cover_frame_timestamp_isValid;

    bool m_is_animation;
    bool m_is_animation_isSet;
    bool m_is_animation_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIInputStoryContent)

#endif // OAIInputStoryContent_H
